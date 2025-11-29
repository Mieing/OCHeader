@class NSDictionary, NSString;

@interface TVLSEI : NSObject

@property (copy, nonatomic) NSDictionary *data;
@property (readonly, copy, nonatomic) NSDictionary *formattedData;
@property (readonly, copy, nonatomic) NSDictionary *appData;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, nonatomic) long long DTS;
@property (readonly, nonatomic) long long PTS;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic, getter=isIndexAvailable) BOOL indexAvailable;
@property (readonly, nonatomic) BOOL isReliable;

+ (id)SEIWithData:(id)a0 DTS:(long long)a1 PTS:(long long)a2 error:(id *)a3;

- (id)initWithData:(id)a0 DTS:(long long)a1 PTS:(long long)a2;
- (void)updateAppDataWithData:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
