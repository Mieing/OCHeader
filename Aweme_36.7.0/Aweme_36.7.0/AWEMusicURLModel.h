@class NSNumber, NSString, NSArray;

@interface AWEMusicURLModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *dataSize;
@property (copy, nonatomic) NSString *fileHash;
@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *urlList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
