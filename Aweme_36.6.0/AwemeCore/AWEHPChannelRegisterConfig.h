@class NSString;

@interface AWEHPChannelRegisterConfig : NSObject <NSCopying, AWEHPChannelRegisterConfigProtocol>

@property (copy, nonatomic) NSString *channelType;
@property (retain, nonatomic) Class controllerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
