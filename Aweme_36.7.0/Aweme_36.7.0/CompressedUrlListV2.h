@class NSString, NSMutableArray;

@interface CompressedUrlListV2 : GPBMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasEnable;
@property (copy, nonatomic) NSString *uriCommon;
@property (nonatomic) BOOL hasUriCommon;
@property (copy, nonatomic) NSString *paramCommon;
@property (nonatomic) BOOL hasParamCommon;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;

+ (id)descriptor;

@end
