@class NSString, NSArray, CSJTemplateResourceArchiveModel;

@interface CSJTemplateModel : NSObject

@property (copy, nonatomic) NSString *main;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *resources;
@property (retain, nonatomic) CSJTemplateResourceArchiveModel *resources_archive;
@property (copy, nonatomic) NSString *fallback;
@property (nonatomic) BOOL reload;

- (id)initWithDicitonary:(id)a0;
- (BOOL)resourceListValid;
- (BOOL)resourcesArchiveValid;
- (BOOL)mainURLValid;
- (BOOL)resourcesValid;
- (id)resourcesMap;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end
