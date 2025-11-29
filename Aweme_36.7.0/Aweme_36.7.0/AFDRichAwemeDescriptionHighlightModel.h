@class NSString, NSDictionary;

@interface AFDRichAwemeDescriptionHighlightModel : NSObject

@property (copy, nonatomic) NSString *hightlightId;
@property (nonatomic) long long hightlightType;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
