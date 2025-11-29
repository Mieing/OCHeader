@class NSString, NSMutableArray;

@interface LabelActionV2 : GPBMessage

@property (copy, nonatomic) NSString *eventId;
@property (nonatomic) BOOL hasEventId;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasActionType;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (copy, nonatomic) NSString *dataRef;
@property (nonatomic) BOOL hasDataRef;

+ (id)descriptor;

@end
