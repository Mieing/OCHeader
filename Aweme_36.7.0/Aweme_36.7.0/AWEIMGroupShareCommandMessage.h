@class NSString, AWEIMShareCommandModel, AWEIMShareDataModel;

@interface AWEIMGroupShareCommandMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (retain, nonatomic) AWEIMShareCommandModel *commandData;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long tokenLines;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *pasteDescription;
@property (retain, nonatomic) AWEIMShareDataModel *shareData;
@property (nonatomic) BOOL isFetchedSuccessfully;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)shouldHideWithCon:(id)a0;
- (BOOL)supportRefactorCell;
- (void).cxx_destruct;
- (long long)templateType;

@end
