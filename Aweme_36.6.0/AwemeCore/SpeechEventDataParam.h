@class NSData, NSObject;

@interface SpeechEventDataParam : NSObject

@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSObject *eventParam;

- (void)dealloc;

@end
