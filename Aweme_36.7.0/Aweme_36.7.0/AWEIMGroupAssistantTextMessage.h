@class NSNumber, NSString, NSDictionary;

@interface AWEIMGroupAssistantTextMessage : AWEIMTextMessage

@property (copy, nonatomic) NSNumber *maxNumberOfLines;
@property (copy, nonatomic) NSString *cardHint;
@property (copy, nonatomic) NSDictionary *cardAppendInfo;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
