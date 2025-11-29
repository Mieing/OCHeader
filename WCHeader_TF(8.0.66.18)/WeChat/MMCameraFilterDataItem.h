@class NSString;

@interface MMCameraFilterDataItem : NSObject

@property (retain, nonatomic) NSString *filterId;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) float defaultValue;
@property (retain, nonatomic) NSString *filterImageUri;
@property (retain, nonatomic) NSString *filterImageMd5Hash;
@property (retain, nonatomic) NSString *filterImagePath;
@property (retain, nonatomic) NSString *coverColorString;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL effective;

+ (id)defaultFilterDataItems;

- (void).cxx_destruct;

@end
