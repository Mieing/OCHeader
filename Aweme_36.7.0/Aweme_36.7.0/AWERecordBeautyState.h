@class AWERecordBeautyStatusScope, AWERecordBeautySourceDataScope, AWERecordBeautyRenderScope;

@interface AWERecordBeautyState : CKScorageRoot

@property (readonly, nonatomic) AWERecordBeautyStatusScope *statusScope;
@property (readonly, nonatomic) AWERecordBeautyRenderScope *renderScope;
@property (readonly, nonatomic) AWERecordBeautySourceDataScope *sourceDataScope;

@end
