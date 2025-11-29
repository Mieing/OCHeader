@class CKGenericTemplateModel, NSString;

@interface ACCStory25SparkTemplateWrapper : NSObject

@property (nonatomic) BOOL supportMention;
@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (copy, nonatomic) NSString *styleIdForTrack;
@property (copy, nonatomic) NSString *backgroundIdForTrack;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0;

@end
