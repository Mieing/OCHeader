@class NSString;

@interface MJTTSRequestParams : MJSpeechRequestParams

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *roleID;

- (id)initWithText:(id)a0 roleID:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
