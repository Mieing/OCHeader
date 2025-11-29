@class NSString;

@interface MMFinderLiveSubTitleData : NSObject

@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long subTitleType;
@property (nonatomic) long long category;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL canStartInSemantics;
@property (nonatomic) unsigned long long clipLengthForSupply;
@property (nonatomic) BOOL isLayout;
@property (nonatomic) long long layoutStartLineIndex;
@property (nonatomic) double layoutStartOffsetX;

+ (id)createSubTitleData:(id)a0;

- (id)init;
- (BOOL)isValid;
- (void)clearLayoutData;
- (id)convertToSupplySubTitleWithClipLength:(unsigned long long)a0;
- (void)initDefaultData;
- (void).cxx_destruct;

@end
