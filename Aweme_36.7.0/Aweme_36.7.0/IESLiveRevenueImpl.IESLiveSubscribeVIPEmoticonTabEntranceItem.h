@class NSString;

@interface IESLiveRevenueImpl.IESLiveSubscribeVIPEmoticonTabEntranceItem : NSObject <IESLiveSubscribeVIPEmoticonTabEntranceItemProtocol> {
    void /* function */ selectImageURL;
    void /* function */ unselectImageURL;
    void /* function */ tabTitle;
}

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableTip;
@property (nonatomic, copy) NSString *selectImageURL;
@property (nonatomic, copy) NSString *unselectImageURL;
@property (nonatomic, copy) NSString *tabTitle;

- (void).cxx_destruct;
- (id)init;

@end
