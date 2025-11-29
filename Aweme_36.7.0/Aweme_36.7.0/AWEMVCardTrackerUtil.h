@interface AWEMVCardTrackerUtil : NSObject

+ (id)trackParamsForVideoInflowWithModel:(id)a0;
+ (id)commonParamsWithModel:(id)a0 context:(id)a1;
+ (id)cardNameWithType:(unsigned long long)a0;
+ (id)trackParamsForLiveInflowWithModel:(id)a0;
+ (id)trackParamsForImageAlbumInflowWithModel:(id)a0;
+ (long long)followTagWithFollowStatus:(long long)a0;
+ (id)idFromModel:(id)a0;
+ (id)dataTypeWithModel:(id)a0;
+ (long long)indexOfModel:(id)a0 inArray:(id)a1;

@end
