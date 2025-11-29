@class NSString, MusicCardUrlModelV2, NSMutableArray;

@interface MusicCardTopLabelV2 : GPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (retain, nonatomic) MusicCardUrlModelV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *textArray;
@property (readonly, nonatomic) unsigned long long textArray_Count;
@property (nonatomic) int truncPos;
@property (nonatomic) BOOL hasTruncPos;

+ (id)descriptor;

@end
