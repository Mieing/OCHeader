@interface BrandAffResortInfoGenerator : NSObject

+ (id)genBizMsgResortV2Context;
+ (struct BizMsgReSortV2ReqContext { void /* function */ **x0; int x1; int x2[3]; void *x3; unsigned long long x4; int x5; void *x6; void *x7; BOOL x8; unsigned int x9; void *x10; int x11; void *x12; struct RepeatedPtrField<biz::BizMsgResortV2Context_SessionBox> { void **x0; int x1; int x2; int x3; } x13; struct RepeatedPtrField<biz::BizMsgResortV2Context_SessionBox> { void **x0; int x1; int x2; int x3; } x14; struct BizMsgReSortV2ReqContext_LastDeleteMsgBoxInfo *x15; unsigned int x16; unsigned int x17; unsigned int x18; })generateResortContext;
+ (id)generateAllTabBoxes;
+ (id)createTabBox:(int)a0 reddotCount:(int)a1;
+ (int)getDiscoverTabRedDotCount;
+ (int)getContactTabRedDotCount;
+ (int)getMoreTabRedDotCount;

@end
