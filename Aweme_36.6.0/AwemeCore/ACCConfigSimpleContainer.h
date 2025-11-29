@class NSString;

@interface ACCConfigSimpleContainer : ACCConfigContainer <ACCConfigContainerDataSource>

@property (retain, nonatomic) NSString *draftID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)composer_draftFolder;
- (id)initWithDraftID:(id)a0;
- (void).cxx_destruct;

@end
