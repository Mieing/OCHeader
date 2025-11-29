@class NSString;

@interface AWEECOMIMChooseMediaApi : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ exportCompletion;

- (id /* block */)p_createPreviewFinishHandler;
- (id)p_videoTempPathWithPath:(id)a0;
- (void).cxx_destruct;
- (id)storage;
- (void)start;

@end
