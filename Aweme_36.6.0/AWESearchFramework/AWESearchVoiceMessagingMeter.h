@interface AWESearchVoiceMessagingMeter : NSObject

@property (nonatomic) double offset;
@property (nonatomic) long long orientation;
@property (nonatomic) long long position;
@property (nonatomic) long long end;
@property (nonatomic) double value;

- (id)init;
- (void)updateValue;
- (void)updateTarget:(double)a0;

@end
