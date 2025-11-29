@class NSString, AWEURLModel;

@interface AWEStudioAIEnhanceAIPResultImageItem : NSObject <NSCoding>

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) AWEURLModel *urlInfo;

- (id)initWithFilePath:(id)a0 urlInfo:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
