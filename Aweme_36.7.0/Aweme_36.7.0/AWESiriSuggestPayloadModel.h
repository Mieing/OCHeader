@class NSString;

@interface AWESiriSuggestPayloadModel : NSObject

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *templateID;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL isFromSiriSuggest;
@property (copy, nonatomic) NSString *groupID;

- (void).cxx_destruct;

@end
