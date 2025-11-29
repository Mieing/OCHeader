@interface SECEventFlowREFuncs : NSObject

+ (id)allFuncs;
+ (id)findLastFromEndToStartByTag:(id)a0 tag:(id)a1;
+ (id)allTagsForBounds:(id)a0;
+ (id)ahead;
+ (id)behind;
+ (id)earlier;
+ (id)later;
+ (id)around;
+ (id)takeList;
+ (id)eventGetProperty;
+ (id)eventFlowOpenInterval;
+ (id)eventFlowCloseToOpenInterval;
+ (id)findFirstFromStartToEndByTag:(id)a0 tag:(id)a1;
+ (id)findFromEndToStartByCount:(id)a0 count:(long long)a1;
+ (id)findFromStartToEndByCount:(id)a0 count:(long long)a1;
+ (id)findFromEndToStartByTime:(id)a0 timeCond:(double)a1;
+ (id)findFromStartToEndByTime:(id)a0 timeCond:(double)a1;
+ (BOOL)eventFlowDataUnifyLegal:(id)a0;
+ (id)eventFlowDataUnify:(id)a0;
+ (id)last;
+ (id)first;
+ (id)take;
+ (id)nearby;

@end
