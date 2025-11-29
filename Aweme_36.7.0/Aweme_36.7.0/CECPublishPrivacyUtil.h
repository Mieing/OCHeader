@class NSString;

@interface CECPublishPrivacyUtil : NSObject <CECPublishPrivacyUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)visibleStatusTypeWith:(id)a0;
+ (unsigned long long)changeStatusTypeWithType:(long long)a0 privacyType:(unsigned long long)a1;
+ (id)convertStatusToString:(long long)a0;


@end
