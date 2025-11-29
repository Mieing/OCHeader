@protocol IESPortraitKeyValueSaverProtocol;

@interface IESPortraitKeyValueSaver : NSObject

@property (retain, nonatomic) id<IESPortraitKeyValueSaverProtocol> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
