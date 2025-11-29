@class NSArray, NSString, AWEURLModel;

@interface AWEIMFoldChatPopupModel : AWEBaseApiModel <AWEIMMultiSelectPopupProtocol>

@property (copy, nonatomic) NSArray *foldGroupList;
@property (retain, nonatomic) NSString *topImageUrl;
@property (nonatomic) BOOL dontPullInNextBootstrap;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) AWEURLModel *bgImageUrlModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)foldGroupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)popupName;
- (long long)popupID;
- (id)popupViewTitle;
- (id)popupViewDescText;
- (void).cxx_destruct;

@end
