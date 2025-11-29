@class NSString, NSMutableDictionary;

@interface IESLiveAnchorLayoutInfo : IESLivePBBaseMessage

@property (nonatomic) int uiLayout;
@property (nonatomic) int range;
@property (copy, nonatomic) NSString *bigAnchorId;
@property (copy, nonatomic) NSString *bigAnchorIdStr;
@property (retain, nonatomic) NSMutableDictionary *layoutDetails;
@property (readonly, nonatomic) unsigned long long layoutDetails_Count;
@property (nonatomic) BOOL bigAnchorIsOrientation;
@property (copy, nonatomic) NSString *bigAnchorOpenIdStr;

+ (id)descriptor;

@end
