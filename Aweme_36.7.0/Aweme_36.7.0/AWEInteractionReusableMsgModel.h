@interface AWEInteractionReusableMsgModel : NSObject

@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long state;

- (void)interactionSateDidChange:(unsigned long long)a0;

@end
