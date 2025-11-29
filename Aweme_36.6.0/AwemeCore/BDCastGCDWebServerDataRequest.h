@class NSString, NSMutableData;

@interface BDCastGCDWebServerDataRequest : BDCastGCDWebServerRequest {
    NSString *_text;
    id _jsonObject;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) id jsonObject;
@property (retain, nonatomic) NSMutableData *data;

- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)close:(id *)a0;
- (BOOL)open:(id *)a0;

@end
