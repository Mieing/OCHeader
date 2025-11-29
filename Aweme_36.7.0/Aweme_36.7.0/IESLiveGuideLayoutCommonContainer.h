@class IESLiveStackManager;

@interface IESLiveGuideLayoutCommonContainer : NSObject

@property (retain, nonatomic) IESLiveStackManager *stackManager;
@property (nonatomic) BOOL isParseFailed;

- (id)setupContainerParser:(id)a0;
- (void)parseContainer:(id)a0 isFromBackUpData:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
