@class NSString;

@interface CDNCheckHitFileInfo : NSObject

@property (nonatomic) int hitType;
@property (nonatomic) unsigned long long fileType;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long thumbSize;
@property (retain, nonatomic) NSString *fileMD5;
@property (retain, nonatomic) NSString *fileID;

- (void).cxx_destruct;

@end
