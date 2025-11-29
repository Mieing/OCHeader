@class NSDictionary;

@interface AWEIMIncentiveChatIndicatorInfo : NSObject

@property (nonatomic) BOOL showStyle;
@property (nonatomic) BOOL coolDownStyle;
@property (nonatomic) unsigned long long activateStyle;
@property (nonatomic) BOOL suppressionStyle;
@property (copy, nonatomic) NSDictionary *dictionaryRawData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
