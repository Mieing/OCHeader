@class NSString;

@interface AWEMRComponentControllerRegisterConfig : NSObject <NSCopying, AWEMRComponentControllerRegisterConfig>

@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *controllerClass;
@property (nonatomic) BOOL enableTopChannel;
@property (nonatomic) BOOL enableBottomChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
