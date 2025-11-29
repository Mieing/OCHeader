@class NSString;

@interface AWECommentTrackingModel : NSObject <AWECommentTrackingModelProtocol> {
    void /* function */ previousPage;
    void /* function */ enterFrom;
    void /* function */ itemID;
    void /* function */ serviceID;
    void /* function */ trackBlock;
    void /* unknown type, empty encoding */ actionChain;
}

@property (nonatomic, copy) NSString *previousPage;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSString *serviceID;
@property (nonatomic, copy) id /* block */ trackBlock;

- (id)pageLogString;
- (void)configBTMInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)trackInfo;

@end
