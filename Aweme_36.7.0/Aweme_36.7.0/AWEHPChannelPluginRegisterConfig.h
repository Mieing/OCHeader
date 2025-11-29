@class NSObject;
@protocol AWEHPChannelPluginControllerProtocol;

@interface AWEHPChannelPluginRegisterConfig : NSObject <NSCopying>

@property (retain, nonatomic) Class controllerClass;
@property (retain, nonatomic) NSObject<AWEHPChannelPluginControllerProtocol> *singleInstance;
@property (nonatomic) BOOL isMultiInstance;
@property (nonatomic) BOOL allowInjectToTopChannel;
@property (nonatomic) BOOL allowInjectToBottomChannel;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
