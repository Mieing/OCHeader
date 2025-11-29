@class NSString;
@protocol IESIMMessageInertPluginDelegate;

@interface IESIMMessageInertPlugin : NSObject <TIMXAppMessageInsertPluginProtocol>

@property (weak, nonatomic) id<IESIMMessageInertPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
