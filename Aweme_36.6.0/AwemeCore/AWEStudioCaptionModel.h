@class NSString, NSArray;

@interface AWEStudioCaptionModel : ACCBaseApiModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long stickerId;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) NSArray *highLightList;
@property (copy, nonatomic) NSArray *lineRectArray;
@property (retain, nonatomic) NSString *rect;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *captionID;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)calculateHighlight:(id)a0 modified:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)calculateSplitHighlight:(id)a0 preHighlight:(id)a1 afterHighlight:(id)a2 splitLocation:(unsigned long long)a3;
+ (id)highLightListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)startTimeJSONTransformer;
+ (id)endTimeJSONTransformer;

@end
