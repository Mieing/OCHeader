@class NSString, MMListenFdListData, NSData, NSMutableArray, MMListenFdMapData;

@interface MMListenFdValue : WXPBGeneratedMessage

@property (nonatomic) int valType;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) float floatValue;
@property (nonatomic) long long int64Value;
@property (nonatomic) unsigned long long uint64Value;
@property (nonatomic) int int32Value;
@property (nonatomic) unsigned int uint32Value;
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) NSMutableArray *stringValueList;
@property (retain, nonatomic) NSMutableArray *floatValueList;
@property (retain, nonatomic) NSMutableArray *int64ValueList;
@property (retain, nonatomic) NSMutableArray *uint64ValueList;
@property (retain, nonatomic) NSMutableArray *int32ValueList;
@property (retain, nonatomic) NSMutableArray *uint32ValueList;
@property (retain, nonatomic) NSMutableArray *boolValueList;
@property (retain, nonatomic) MMListenFdMapData *mapValue;
@property (retain, nonatomic) MMListenFdListData *listValue;
@property (nonatomic) double doubleValue;
@property (retain, nonatomic) NSMutableArray *doubleValueList;
@property (retain, nonatomic) NSMutableArray *mapValueList;
@property (retain, nonatomic) NSMutableArray *listValueList;

+ (void)initialize;

@end
