@class NSString, NSDictionary;

@interface IESECCollectStashedEvent : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSString *opportunity;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL hold;
@property (retain, nonatomic) NSString *renderObjectKey;

- (void).cxx_destruct;

@end
