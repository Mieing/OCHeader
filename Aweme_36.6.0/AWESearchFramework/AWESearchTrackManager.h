@class NSDictionary, NSString;

@interface AWESearchTrackManager : NSObject <AWESearchTagViewTrackProtocol>

@property (copy, nonatomic) NSDictionary *trackLoaclDict;
@property (copy, nonatomic) NSDictionary *logData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShowEventWithModel:(id)a0;
- (void)setLocalTrackDict:(id)a0 searchKeyword:(id)a1 referString:(id)a2;
- (void)setLocalTrackDict:(id)a0 searchKeyword:(id)a1;
- (void)trackShowEventWithModel:(id)a0 btm:(id)a1 host:(id)a2;
- (void)trackClickEventWithModel:(id)a0 btm:(id)a1 host:(id)a2;
- (void)trackClickEventWithModel:(id)a0;
- (void).cxx_destruct;

@end
