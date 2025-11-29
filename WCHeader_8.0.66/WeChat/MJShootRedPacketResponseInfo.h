@class NSString, NSArray;

@interface MJShootRedPacketResponseInfo : NSObject

@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *fileMD5;
@property (retain, nonatomic) NSString *templateID;
@property (retain, nonatomic) NSString *cdnURLString;
@property (retain, nonatomic) NSArray *auditFileURLStrings;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long creationType;

- (id)initWithCreationType:(unsigned long long)a0 mediaType:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
