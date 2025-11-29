@class NSString;

@interface AWEHPBottomTabSpecialEntryFactory : HTSService <AWEHPBottomTabSpecialEntryFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateDoubleCardEntry;
+ (id)generateDoubleCardTextEntry;
+ (id)generateIconTextEntry;
+ (id)generateIconEntry;


@end
