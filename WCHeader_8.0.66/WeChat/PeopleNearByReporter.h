@interface PeopleNearByReporter : NSObject

+ (unsigned int)getFilterTypeFromSetting;
+ (void)reportStayTime:(unsigned long long)a0;
+ (void)reportAction:(unsigned int)a0 FilterType:(unsigned int)a1 Scene:(unsigned int)a2;
+ (void)reportUserInfoRelated:(id)a0 userAtIndex:(unsigned long long)a1 action:(unsigned int)a2 filterType:(unsigned int)a3 Scene:(int)a4;

@end
