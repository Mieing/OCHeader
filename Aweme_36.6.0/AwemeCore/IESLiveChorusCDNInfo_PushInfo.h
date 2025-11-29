@class NSString, NSMutableArray;

@interface IESLiveChorusCDNInfo_PushInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mainUrlsArray;
@property (readonly, nonatomic) unsigned long long mainUrlsArray_Count;
@property (copy, nonatomic) NSString *pushURL;

+ (id)descriptor;

@end
