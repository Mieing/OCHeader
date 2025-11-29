@class AWEProgressFakeViewUIConfig;

@interface AWEProgressFakeViewStatusUIConfig : NSObject

@property (retain, nonatomic) AWEProgressFakeViewUIConfig *fakeViewDefaultUIConfig;
@property (retain, nonatomic) AWEProgressFakeViewUIConfig *fakeViewActiveUIConfig;

+ (id)fakeViewStatusConfig:(id)a0 activeUIConfig:(id)a1;

- (void).cxx_destruct;

@end
