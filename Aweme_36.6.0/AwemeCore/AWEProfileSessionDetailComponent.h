@class NSString;

@interface AWEProfileSessionDetailComponent : AWEProfileSessionBaseComponent <AWEUserDetailControllerProtocol>

@property (nonatomic) long long enterRelationTag;
@property (nonatomic) long long othersEnterRelationTag;
@property (nonatomic) BOOL hasRecordTag;
@property (nonatomic) BOOL hasClickBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
