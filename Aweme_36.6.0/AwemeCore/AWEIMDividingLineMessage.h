@class NSString;

@interface AWEIMDividingLineMessage : AWEIMMessage <AWEIMMessageConfigProtocol>

@property (readonly, nonatomic) NSString *dividingLineText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUserCellType;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (void).cxx_destruct;
- (long long)templateType;

@end
