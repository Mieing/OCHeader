@class IESECListAction, NSMutableDictionary, IESECInteractionContentCheck, NSMutableArray, IESECMessageProduct;

@interface IESECInteractionContent : GPBMessage

@property (retain, nonatomic) IESECInteractionContentCheck *check;
@property (nonatomic) BOOL hasCheck;
@property (nonatomic) int priority;
@property (nonatomic) int loopCount;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (readonly, nonatomic) unsigned long long contentArray_Count;
@property (retain, nonatomic) NSMutableDictionary *eventParam;
@property (readonly, nonatomic) unsigned long long eventParam_Count;
@property (retain, nonatomic) NSMutableArray *rowsArray;
@property (readonly, nonatomic) unsigned long long rowsArray_Count;
@property (retain, nonatomic) NSMutableArray *bgColorsArray;
@property (readonly, nonatomic) unsigned long long bgColorsArray_Count;
@property (retain, nonatomic) IESECMessageProduct *product;
@property (nonatomic) BOOL hasProduct;
@property (retain, nonatomic) IESECListAction *action;
@property (nonatomic) BOOL hasAction;

+ (id)descriptor;

@end
