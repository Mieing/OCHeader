@class NSString;

@interface BDReaderTxtConfig : NSObject

@property (copy, nonatomic) NSString *regex;
@property (nonatomic) unsigned long long splitMaxLength;
@property (nonatomic) unsigned long long chapterRetAmount;
@property (nonatomic) unsigned long long titleLengthLimit;
@property (nonatomic) unsigned long long readFileBufferSize;
@property (nonatomic) BOOL delEmptyLine;
@property (copy, nonatomic) NSString *linkTitle;

- (void).cxx_destruct;
- (id)init;

@end
