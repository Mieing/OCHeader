@class NSString, NSMutableData;

@interface GCDWebServerDataRequest : GCDWebServerRequest {
    NSString *_text;
    id _jsonObject;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) id jsonObject;
@property (readonly, nonatomic) NSMutableData *data;

- (BOOL)open:(id *)a0;
- (BOOL)writeData:(id)a0 error:(id *)a1;
- (BOOL)close:(id *)a0;
- (id)description;
- (void).cxx_destruct;

@end
