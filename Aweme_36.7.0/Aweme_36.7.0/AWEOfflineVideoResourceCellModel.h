@class AWEOfflineVideoResourceModel, NSString;

@interface AWEOfflineVideoResourceCellModel : NSObject <AWEListDiffable>

@property (retain, nonatomic) AWEOfflineVideoResourceModel *resourceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifierKey;
- (id)initWithResourceModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
