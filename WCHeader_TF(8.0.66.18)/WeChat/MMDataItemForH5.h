@class NSString, CMessageWrap;

@interface MMDataItemForH5 : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL isVideoImgFile;
@property (retain, nonatomic) NSString *fileIdForH5;

- (void).cxx_destruct;

@end
