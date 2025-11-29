@class NSString;

@interface BDMapViewConfig : NSObject

@property (copy, nonatomic) NSString *bizName;
@property (nonatomic) unsigned long long sdkType;
@property (nonatomic) unsigned long long bizMapSDKType;

- (id)initWithMapViewBizSDKType:(unsigned long long)a0 bizName:(id)a1;
- (void)setRealMapSDKType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
