@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWEIMSharePoiMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) AWEURLModel *mapURL;
@property (retain, nonatomic) NSArray *coverURLArray;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *pushDetail;
@property (retain, nonatomic) AWEURLModel *poiIconURL;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSDictionary *poiTrackParams;
@property (retain, nonatomic) NSArray *localCoverURLArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)isAllowedForward;
- (BOOL)isSupportForward;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
