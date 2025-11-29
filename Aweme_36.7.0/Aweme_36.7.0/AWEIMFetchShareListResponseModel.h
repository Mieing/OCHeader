@class NSArray, NSString;

@interface AWEIMFetchShareListResponseModel : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *transpondShareModelList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *abnormalList;
@property (nonatomic) BOOL abnormalDatabase;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSString *emptyReason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
