@class NSString;

@interface AWEIMNewcomerReportCardMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (double)bubbleMaxWidth;
- (id)supportMessageMenuTypeList;
- (long long)templateType;

@end
