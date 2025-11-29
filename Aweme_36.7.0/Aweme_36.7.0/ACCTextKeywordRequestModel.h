@class NSString, NSArray;

@interface ACCTextKeywordRequestModel : NSObject

@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSArray *textContents;
@property (retain, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSArray *tagList;

- (id)initWithTemplateId:(id)a0 textContents:(id)a1 effectId:(id)a2 tagList:(id)a3;
- (void).cxx_destruct;

@end
