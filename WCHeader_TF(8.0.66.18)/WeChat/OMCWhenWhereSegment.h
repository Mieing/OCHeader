@class NSString, OMCGeographicInfo, NSDate;

@interface OMCWhenWhereSegment : OMCElementSegment <OMCEditingStateAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMSWhenWhereSegment> { struct XMSWhenWhereSegment *x0; } backingWhenWhereSegment;
@property (readonly, nonatomic) NSString *materialID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) OMCGeographicInfo *geoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)a0;
- (BOOL)updateLocationWithGeoInfo:(id)a0;
- (BOOL)updateStyleWithMaterialID:(id)a0;
- (void)enterEditingState;
- (void)leaveEditingState;
- (BOOL)isEditingState;

@end
