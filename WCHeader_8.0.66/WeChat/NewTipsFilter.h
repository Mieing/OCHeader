@class NSString;

@interface NewTipsFilter : NSObject

@property (retain, nonatomic) NSString *configPath;

- (BOOL)validateAndDealNewTipsInfoOnReceiveXml:(id)a0;
- (BOOL)canShowTipsWithTipsInfo:(id)a0;
- (BOOL)needRequestLocalTipWhenLauchWithId:(int)a0 Uid:(id)a1;
- (void).cxx_destruct;

@end
